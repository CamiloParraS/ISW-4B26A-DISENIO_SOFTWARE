import java.util.List;

public class Carro {
    private String color;
    private Chasis chasis;
    private List<Llanta> llanta;

    public Carro(String color, Chasis chasis, List<Llanta> llanta) {
        this.color = color;
        this.chasis = chasis;
        this.llanta = llanta;
    }

    public String getColor() { return color; }
    public void setColor(String color) { this.color = color; }

    public Chasis getChasis() { return chasis; }
    public void setChasis(Chasis chasis) { this.chasis = chasis; }

    public List<Llanta> getLlanta() { return llanta; }
    public void setLlanta(List<Llanta> llanta) { this.llanta = llanta; }

    @Override
    public String toString() {
        return "Carro ,color='" + color + "', chasis=" + chasis + ", llantas=" + llanta;
    }
}