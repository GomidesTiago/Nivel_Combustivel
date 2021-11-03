#include "stdio.h"

int main()
{
  float VolumeTotal, VolumeAtual, VolumePercentual;

  printf("\n Digite o volume total do tanque:\n");
  scanf("%f", &VolumeTotal);

  printf("\n Digite o volume atual do tanque:\n");
  scanf("%f", &VolumeAtual);

  if (VolumeTotal <= 0)
  {
    printf("\n Volume Total do tanque do veiculo invalido \n");
  }
  else if (VolumeAtual > VolumeTotal)
  {
    printf("\n Volume atual do tanque do veiculo invalido \n");
  }
  else
  {
    if (VolumeAtual <= VolumeTotal)
    {
      VolumePercentual = VolumeTotal * 0.15;

      if (VolumeAtual < VolumePercentual)
      {
        printf ( "\n O seu tanque esta com %.1f litros." , VolumeAtual ) ;
        printf(" Abasteca seu veiculo\n");
      }
      else
      {
        printf ( "\n O seu tanque esta com %.1f litros." , VolumeAtual ) ;
        printf("\n  Seu combustivel esta Ok aproveite sua viagem \n");
      }
    }
  }
}
