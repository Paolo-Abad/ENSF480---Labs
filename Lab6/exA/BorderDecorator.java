import java.awt.Graphics;
import java.awt.Graphics2D;
import java.awt.Stroke;
import java.awt.BasicStroke;
import java.awt.Color;

public class BorderDecorator extends Decorator {

  BorderDecorator(Component cmp, int x, int y, int width, int height) {
    super(cmp, x, y, width, height);
  }

  public void draw(Graphics g) {
    cmp.draw(g); // draw text first

    Stroke dashed = new BasicStroke(
        3,
        BasicStroke.CAP_BUTT,
        BasicStroke.JOIN_BEVEL,
        0,
        new float[] { 9 }, 0);
    Graphics2D g2d = (Graphics2D) g;
    Stroke oldStroke = g2d.getStroke();
    Color oldColor = g2d.getColor();

    g2d.setStroke(dashed);
    g2d.setColor(Color.black);

    g2d.drawRect(x, y, width, height);

    g2d.setStroke(oldStroke);
    g2d.setColor(oldColor);
  }
}
