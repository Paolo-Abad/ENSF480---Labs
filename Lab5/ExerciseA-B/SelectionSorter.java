import java.util.ArrayList;

public class SelectionSorter<E extends Number & Comparable<E>>
        implements Sorter<E> {

    public void sort(ArrayList<Item<E>> list) {
        for (int i = 0; i < list.size() - 1; i++) {
            int minIndex = i;

            for (int j = i + 1; j < list.size(); j++) {
                E current = list.get(j).getItem();
                E smallest = list.get(minIndex).getItem();

                if (current.compareTo(smallest) < 0) {
                    minIndex = j;
                }
            }

            Item<E> temp = list.get(i);
            list.set(i, list.get(minIndex));
            list.set(minIndex, temp);
        }
    }
}