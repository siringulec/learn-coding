public class Factory1 implements Factory{
    public Pepper getPepper(){
        return new GreenPepper();
    }
    public Apple getApple(){
        return new GreenApple();
    }
}
