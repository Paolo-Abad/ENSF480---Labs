public abstract class Decorator implements Component {
  Component cmp;
  int x;
  int y;
  int width;
  public int height;

  Decorator(Component cmp, int x, int y, int width, int height) {
    this.cmp = cmp;
    this.x = x;
    this.y = y;
    this.width = width;
    this.height = height;
  }
}
