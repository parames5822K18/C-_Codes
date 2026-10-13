class jagged_arr{
    static void  main(String arg[]){
        
        int arr[][]=new int[3][];
        arr[0]=new int[3];
        arr[1]=new int[5];
        arr[2]=new int[2];
        arr[0][1]=1;
        for(int i=0;i<3;i++){
            for(int j=0;j<arr[i].length;j++){
                arr[i][j]=(int)(Math.random()*10);
            }
        }
        for(int i=0;i<3;i++){
            for(int j=0;j<arr[i].length;j++){
                System.out.print(arr[i][j]);
                System.out.print(' ');
            }
            System.out.print('\n');
            System.out.printf();
        }
        //System.out.println(arr[0][1]);
    }
}