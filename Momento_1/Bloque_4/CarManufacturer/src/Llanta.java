public class Llanta {
    private float tamano;
    private TipoLlanta tipo;

    public Llanta(float tamano, TipoLlanta tipo) {
        this.tamano = tamano;
        this.tipo = tipo;
    }

    public float getTamano() {
        return tamano;
    }

    public void setTamano(float tamano) {
        this.tamano = tamano;
    }

    public TipoLlanta getTipo() {
        return tipo;
    }

    public void setTipo(TipoLlanta tipo) {
        this.tipo = tipo;
    }

    @Override
    public String toString() {
        return String.format("Llanta{tamano=%s, tipo=%s}", tamano, tipo);
    }
}
