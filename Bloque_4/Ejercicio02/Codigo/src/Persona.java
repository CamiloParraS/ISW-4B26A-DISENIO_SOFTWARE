import java.util.Random;

public class Persona {
    // === Constantes ===     
    private static final char DEFAULT_SEXO = 'H';
    private static final int BAJO_PESO = -1;
    private static final int PESO_IDEAL = 0;
    private static final int SOBREPESO = 1;
    
    // === Attributes ===
    private String nombre;
    private int edad;
    private String dni;
    private double peso;
    private double altura;
    private char sexo;

    // === Constructors ===
    // Valores Predeterminados
    public Persona() {
        this.nombre = "";
        this.edad = 0;
        this.peso = 0;
        this.altura = 0;
        this.sexo = DEFAULT_SEXO;
        generarDNI();
    }

    // Edad, Nombre y Sexo
    public Persona(String nombre, int edad, char sexo) {
        this.nombre = nombre;
        this.edad = edad;
        comprobarSexo(sexo);
        generarDNI();
    }

    // Contructor Completo
    public Persona(String nombre, int edad, String dni, char sexo, double peso, double altura) {
        this.nombre = nombre;
        this.edad = edad;
        this.dni = dni;
        this.peso = peso;
        this.altura = altura;
        comprobarSexo(sexo);
        generarDNI();
    }

    // === Metodos ===
    // Getters
    public String getNombre() {
        return nombre;
    }
    public int getEdad() {
        return edad;
    }
    public String getDNI() {
        return dni;
    }
    public char getSexo() {
        return sexo;
    }
    public double getPeso() {
        return peso;
    }
    public double getAltura() {
        return altura;
    }

    // Setters
    public void setNombre(String nombre) {
        this.nombre = nombre;
    }

    public void setEdad(int edad) {
        this.edad = edad;
    }

    public void setPeso(double peso) {
        this.peso = peso;
    }

    public void setAltura(double altura) {
        this.altura = altura;
    }

    public void setSexo(char sexo) {
        comprobarSexo(sexo);
    }

    // Los metodos que pide
    // PUBLICOS
    public boolean esMayorEdad() {
        return edad >= 18;
    }
    
    public int calcularIMC() {
        if (this.altura <= 0) {
            return BAJO_PESO;
        }

        double imc = peso / (altura*altura);

        if (imc < 20) {
            return BAJO_PESO;
        } else if (imc >= 20 && imc <= 25) {
            return PESO_IDEAL;
        } else {
            return SOBREPESO;
        }
    }

    @Override
    public String toString() {
        return "Nombre = '" + nombre + "\'" + ", Edad = " + edad + ", DNI ='" + dni + "\'" + ", Sexo = " + sexo + ", Peso = " + peso + " kg" + ", Altura = " + altura + "m";
    }
    // PRIVADOS
    private void generarDNI() {
        Random r = new Random();

        int randomEight = r.nextInt(99_999_999);
        String baseStr = String.format("%08d",  randomEight);
        int hash = baseStr.hashCode();

        char lastDigit = (char) ('A' + (Math.abs(hash)%26));

        this.dni = baseStr + lastDigit;
    }

    private void comprobarSexo(char sexo) {
        sexo = Character.toUpperCase(sexo);
        if (sexo == 'H' || sexo == 'M') {
            this.sexo = sexo;
        } else {
            this.sexo = DEFAULT_SEXO;
        }
    }
}
