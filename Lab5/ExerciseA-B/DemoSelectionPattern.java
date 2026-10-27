public class DemoSelectionPattern {
    public static void main(String[] args) {
        MyVector<Integer> v = new MyVector<Integer>(5);

        v.add(new Item<Integer>(35));
        v.add(new Item<Integer>(19));
        v.add(new Item<Integer>(31));
        v.add(new Item<Integer>(30));
        v.add(new Item<Integer>(33));

        System.out.println("The original values are:");
        v.display();

        v.setSortStrategy(new SelectionSorter<Integer>());
        v.performSort();

        System.out.println("\nThe values after SelectionSorter are:");
        v.display();
    }
}