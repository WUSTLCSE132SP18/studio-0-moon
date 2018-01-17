
public class heartbeat {
	public static void main(String[] args) {
		for(int i=0; i<60; i++) {
			try {
				Thread.sleep(1000);
			} catch (InterruptedException e) {
				e.printStackTrace();
			}
			
			System.out.println(i + " seconds have elapsed.");
		}
	}
}
