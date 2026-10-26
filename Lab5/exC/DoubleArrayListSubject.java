import java.util.ArrayList;

public class DoubleArrayListSubject implements Subject {
  private ArrayList<Double> data;
  private ArrayList<Observer> observers;

  public DoubleArrayListSubject() {
    data = new ArrayList<Double>();
    observers = new ArrayList<Observer>();
  }

  public void addData(Double value) {
    data.add(value);
    notifyObserver();
  }

  public void setData(Double value, int index) {
    if (index < 0 || index >= data.size()) {
      return; // invalid index
    }
    data.set(index, value);
    notifyObserver();
  }

  public void populate(double[] values) {
    data.clear();
    for (double v : values) {
      data.add(v);
    }
    notifyObserver();
  }

  public void display() {
    if (data.isEmpty()) {
      System.out.println("Empty List ...");
      return;
    }
    for (Double d : data) {
      System.out.print(d + " ");
    }
    System.out.println();
  }

  public void register(Observer o) {
    if (o == null || observers.contains(o)) {
      return;
    }
    observers.add(o);
    o.update(new ArrayList<Double>(data));
  }

  public void remove(Observer o) {
    observers.remove(o);
  }

  public void notifyObserver() {
    for (Observer o : observers) {
      o.update(new ArrayList<Double>(data));
    }
  }
}
