
//for EX-B
import java.awt.Graphics;
import java.awt.Graphics2D;
import java.awt.Color;
import java.awt.Composite;
import java.awt.AlphaComposite;

public class ColouredGlassDecorator extends Decorator {

    ColouredGlassDecorator(Component cmp, int x, int y, int width, int height) {
        super(cmp, x, y, width, height);
    }

    public void draw(Graphics g) {
        cmp.draw(g);

        Graphics2D g2d = (Graphics2D) g;
        Color oldColor = g2d.getColor();
        Composite oldComposite = g2d.getComposite();

        g2d.setColor(Color.GREEN);
        g2d.setComposite(
                AlphaComposite.getInstance(AlphaComposite.SRC_OVER, 0.1f));
        g2d.fillRect(x, y, width, height);

        g2d.setColor(oldColor);
        g2d.setComposite(oldComposite);
    }
}