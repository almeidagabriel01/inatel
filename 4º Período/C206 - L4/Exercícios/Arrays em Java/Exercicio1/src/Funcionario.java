public class Funcionario {
  String nome;
  String cpf;
  double salario;


  
  public Funcionario(String nome, String cpf, double salario) {
    this.nome = nome;
    this.cpf = cpf;
    this.salario = salario;
  }


  void mostrarInformacoes(){
    System.out.println("Funcionario: " + nome);
    System.out.println("CPF: " + cpf);
    System.out.println("Salario: R$" + salario);
  }
}
