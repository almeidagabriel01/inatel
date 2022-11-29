public class Comprador {
  private String nome;
  private double saldo;

  public Comprador(String nome, double saldo) {
    this.nome = nome;
    this.saldo = saldo;
  }

  public void efetuarCompra(Brownie brownie){
    System.out.println("Comprando um brownie" + brownie.getNome());
  }
}
