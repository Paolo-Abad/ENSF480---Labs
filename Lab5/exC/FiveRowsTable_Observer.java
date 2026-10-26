import java.util.ArrayList;

public class FiveRowsTable_Observer implements Observer {
  private static final int ROWS = 5;
  private ArrayList<Double> data = new ArrayList<Double>();

  public FiveRowsTable_Observer(Subject subject) {
    subject.register(this);
  }

  public void update(ArrayList<Double> newData) {
    data = newData;
    display();
  }

  public void display() {
    System.out.println();
    System.out.println("Notification to Five-Rows Table Observer: Data Changed:");
    for (int r = 0; r < ROWS; r++) {
      StringBuilder sb = new StringBuilder();
      for (int i = r; i < data.size(); i += ROWS) {
        sb.append(data.get(i)).append(" ");
      }
      System.out.println(sb.toString().trim());
    }
  }
}
