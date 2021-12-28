public class Factory2 implements Factory{
    public Pepper getPepper(){
        return new RedPepper();
    }
    public Apple getApple(){
        return new RedApple();
    }
}
