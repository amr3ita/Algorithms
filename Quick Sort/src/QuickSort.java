public class sort {

    public static void swap(int[] arr, int i, int j) {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }

    public static int partition(int[] arr, int start, int end) {
        int pivote = arr[end];
        int i = start;
        for (int j = start; j <= end - 1; j++) {
            if (arr[j] < pivote) {
                swap(arr, i, j);
                i++;
            }
        }
        swap(arr, i, end);
        return i;
    }

    public static void quicksort(int[] arr, int start, int end) {
        if (start < end) {
            int pi = partition(arr, start, end);
            quicksort(arr, start, pi - 1);
            quicksort(arr, pi + 1, end);
        }
    }

    public static void main(String[] args) {
        int[] arr = { 10, 7, 8, 9, 1, 5 };
        int n = 6;
        quicksort(arr, 0, n - 1);
        for (int i = 0; i < 6; i++)
            System.out.print(arr[i] + " ");
    }
}
