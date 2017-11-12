#!/bin/bash

echo 'Escreva qual mapa você quer colorir'
echo '1 - Estados brasileiros'
echo '2 - America do Sul'

read opc

#testando se o campo digitado foi nulo!
if [ -z $opc ]; then
  echo "ERRO!"
  echo "Parâmetro inválido!!!"
  sleep 1

elif [ $opc -eq 1 ]; then #opção == 1 mapa dos estados brasileiros
  cat mapa_estados_brasileiros.lp >> graph_coloring.lp
  clingo graph_coloring.lp >> resultado.txt
  gcc -o coloracao_mapa_brasil coloracao_mapa_brasil.c
  ./coloracao_mapa_brasil
  rm -f coloracao_mapa_brasil
  rm -f resultado.txt

elif [ $opc -eq 2 ]; then #opção == 2 mapa da América do Sul
  cat mapa_america_do_sul.lp >> graph_coloring.lp
  clingo graph_coloring.lp >> resultado.txt
  gcc -o coloracao_mapa_brasil coloracao_mapa_brasil.c
  ./coloracao_mapa_brasil
  rm -f coloracao_mapa_brasil
  rm -f resultado.txt

else
  echo "ERRO!"
  echo 'Opção inválida...'
  sleep 1
fi
