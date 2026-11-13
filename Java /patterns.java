public class patterns {
    public static void main(String[] args) {
        int n = 5;
        int k = 1;
        int l = 0;
        //outer loop 
        for(int i=1; i<=n; i++) {
            for(int j=1;j<i+1;j++){
                if((i+j)%2==0){
                    System.out.print(k);
                }
                else{
                    System.out.print(l);
                }
              
            }
        
            
            System.out.println();
        }

    }
}
