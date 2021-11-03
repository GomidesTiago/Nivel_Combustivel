# Programa 

O programa recebe o nível atual de combustivel de um automovel e o volume total do tanque em litros.
Imprime a mensagem "O seu tanque esta com (Valor digitado pelo usuario) litros. Abasteça seu veiculo" quando o nível do tanque estiver abaixo de 15% do volume total, 
se caso igual ou superior a 15% imprime a mensagem " O seu tanque esta com (Valor digitado pelo usuario) litros. Seu combustivel esta Ok aproveite sua viagem".

# Funcionamento do programa 
* Receber volumeTotal e volumeAtual
* Impede valores nulos ou negativos
* Calcular 15% do volumeTotal dando o volumePercentual
* Decidir qual mensagem emitir

## Detalhamento 

### Impede valores nulos ou negativos
```c
  if (VolumeTotal <= 0)
  {
    printf("\n Volume Total do tanque do veiculo invalido \n");
  }
  else if (VolumeAtual > VolumeTotal)
  {
    printf("\n Volume atual do tanque do veiculo invalido \n");
  }
```
### Como decidir  qual mensagem emitir?
```c
if (VolumeAtual < VolumePercentual)
      {
        printf ( "\n O seu tanque esta com (Valor digitado pelo usuario) litros," , VolumeAtual ) ;
        printf(" Abasteca seu veiculo\n");
      }
      else
      {
        printf ( "\n O seu tanque esta com (Valor digitado pelo usuario) litros," , VolumeAtual ) ;
        printf("\n  Seu combustivel esta Ok aproveite sua viagem \n");
      }
```
