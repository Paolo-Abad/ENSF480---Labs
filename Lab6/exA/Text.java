import java.awt.Graphics;

public class Text implements Component {
  int x;
  int y;
  String text;

  Text(String text, int x, int y) {
    this.text = text;
    this.x = x;
    this.y = y;
  }

  public void draw(Graphics g) {
    g.drawString(text, x, y); // draw only text with these args
  }
}
