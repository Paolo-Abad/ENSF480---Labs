import java.util.ArrayList;

public class OneRow_Observer implements Observer {
  private ArrayList<Double> data = new ArrayList<Double>();

  public OneRow_Observer(Subject subject) {
    subject.register(this);
  }

  public void update(ArrayList<Double> newData) {
    data = newData;
    display();
  }

  public void display() {
    System.out.println();
    System.out.println("Notification to One-Row Observer: Data Changed:");
    StringBuilder sb = new StringBuilder();
    for (Double d : data) {
      sb.append(d).append(" ");
    }
    System.out.println(sb.toString().trim());
  }
}
