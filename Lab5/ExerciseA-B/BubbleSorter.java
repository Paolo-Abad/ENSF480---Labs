import java.util.ArrayList;

public class BubbleSorter<E extends Number & Comparable<E>>
        implements Sorter<E> {

    public void sort(ArrayList<Item<E>> list) {
        for (int i = 0; i < list.size() - 1; i++) {
            for (int j = 0; j < list.size() - 1 - i; j++) {
                E first = list.get(j).getItem();
                E second = list.get(j + 1).getItem();

                if (first.compareTo(second) > 0) {
                    Item<E> temp = list.get(j);
                    list.set(j, list.get(j + 1));
                    list.set(j + 1, temp);
                }
            }
        }
    }
}