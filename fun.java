class fun{
    public static void main(String Args[]){
        internalFun(9);
        External.externalFun(9);
    }
    public static void internalFun(int num){
        for(int i=0;i<num;i++){
            System.out.println("PARAM");
        }
    }
}
class External{
    public static void externalFun(int num){
        for(int i=0;i<num;i++){
            System.out.println("POOJI");
        }
    }
}