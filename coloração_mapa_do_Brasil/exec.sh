#!/bin/bash

mapa_estados_brasileiros.lp >> graph_coloring.lp

clingo graph_coloring.lp >> resultado.txt

gcc -o coloracao_mapa_brasil coloracao_mapa_brasil.c

./coloracao_mapa_brasil
