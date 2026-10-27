import java.util.ArrayList;

public class InsertionSorter<E extends Number & Comparable<E>>
        implements Sorter<E> {

    public void sort(ArrayList<Item<E>> list) {
        for (int i = 1; i < list.size(); i++) {
            Item<E> temp = list.get(i);
            int j = i - 1;

            while (j >= 0) {
                E current = list.get(j).getItem();

                if (current.compareTo(temp.getItem()) > 0) {
                    list.set(j + 1, list.get(j));
                    j--;
                } else {
                    break;
                }
            }

            list.set(j + 1, temp);
        }
    }
}