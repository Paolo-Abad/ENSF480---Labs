import java.util.ArrayList;

public class ThreeColumnTable_Observer implements Observer {
  private static final int COLUMNS = 3;
  private ArrayList<Double> data = new ArrayList<Double>();

  public ThreeColumnTable_Observer(Subject subject) {
    subject.register(this);
  }

  public void update(ArrayList<Double> newData) {
    data = newData;
    display();
  }

  public void display() {
    System.out.println();
    System.out.println("Notification to Three-Column Table Observer: Data Changed:");
    for (int i = 0; i < data.size(); i++) {
      System.out.print(data.get(i));
      if ((i + 1) % COLUMNS == 0 || i == data.size() - 1) {
        System.out.println();
      } else {
        System.out.print(" ");
      }
    }
  }
}
