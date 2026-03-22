public class abcd {
    public static void main(String[] args) {
        int target = 7;
        int [] arr = {5, 1, 4, 3, 2};
        for(int i=0; i<arr.length; i++){
            for(int j=0; j<arr.length; j++){
                int sum = arr[i] + arr[j];
                if(sum == target){
                    System.out.println("true");
                }
            }
            
        }
        
    }
    
}
