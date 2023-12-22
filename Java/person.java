package Java;
public class person {
    protected String name;
    protected int age;
    protected float height;
    public person() {}
    public person(String name, int age, float height) {
        this.name = name;
        this.age = age;
        this.height = height;
    }
    void eat(String foodName) {
        System.out.println(name+" is eating "+foodName);
    }
    public int getAge() {
        return age;
    }
    public void puts() {
        System.out.println(name);
        System.out.println(age);
        System.out.println(height);
    }
}