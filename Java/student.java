package Java;
public class student {
    public String name;
    public int age;
    public float height;
    public static String universityName = "hwangEducation";
    public static int total = 0;
    public student() {}
    public student(String name, int age, float height) {
        this.name = name;
        this.age = age;
        this.height = height;
        ++total;
    }
    public static void getInfoUniversity() {
        System.out.println("hwang's learning java!");
    }
    public void puts() {
        System.out.println(name);
        System.out.println(age);
        System.out.println(height);
    }
}
