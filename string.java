class string{
    public static void main(){
        int p=10;
        String str=new String("Parameswar");
        System.out.println(str);
        System.out.println(p);
        String Arr[]=new String[p];
        for(int i=0;i<p;i++){
            Arr[i]=new String("PARAM");;
        }
        for(String P:Arr){//ENHANCED LOOP
            System.out.println(P);
        }
    }
}