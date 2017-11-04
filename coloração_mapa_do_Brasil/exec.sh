#!/bin/bash

clingo graph_coloring_mapa_brasil.lp >> resultado.txt

gcc -o coloracao_mapa_brasil coloracao_mapa_brasil.c

./coloracao_mapa_brasil
