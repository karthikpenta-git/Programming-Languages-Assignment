public class MemoryExample {
    public static void main(String[] args) {

        System.out.println("Allocating memory...");

        byte[][] data = new byte[20][];

        for (int i = 0; i < 20; i++) {
            data[i] = new byte[5 * 1024 * 1024];
        }

        System.out.println("Approximately 100 MB allocated.");

        data = null;

        System.out.println("References removed.");

        System.gc();

        System.out.println("Garbage collection requested.");

        try {
            Thread.sleep(1000);
        } catch (InterruptedException e) {
            Thread.currentThread().interrupt();
        }

        System.out.println("Program completed.");
    }
}
