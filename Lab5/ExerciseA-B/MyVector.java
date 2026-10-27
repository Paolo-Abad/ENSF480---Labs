import java.util.ArrayList;

public class MyVector<E extends Number & Comparable<E>> {
    private ArrayList<Item<E>> storageM;
    private Sorter<E> sorter;

    public MyVector(int n) {
        storageM = new ArrayList<Item<E>>(n);
    }

    public MyVector(ArrayList<Item<E>> arr) {
        storageM = new ArrayList<Item<E>>();

        for (int i = 0; i < arr.size(); i++) {
            Item<E> temp = new Item<E>(arr.get(i).getItem());
            storageM.add(temp);
        }
    }

    public void add(Item<E> value) {
        storageM.add(value);
    }

    public void setSortStrategy(Sorter<E> s) {
        sorter = s;
    }

    public void performSort() {
        if (sorter != null) {
            sorter.sort(storageM);
        }

    }

    public void display() {
        for (int i = 0; i < storageM.size(); i++) {
            System.out.printf(storageM.get(i).getItem() + " ");
        }
        System.out.println();
    }
}