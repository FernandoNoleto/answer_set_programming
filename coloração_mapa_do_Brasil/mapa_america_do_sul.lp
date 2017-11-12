%MAPA DA AMÉRICA DO SUL
node(1..13).
%ARGENTINA
edge(1,2).  edge(1,3).   edge(1,4). edge(1,5). edge(1,6).
%CHILE
edge(2,1).  edge(1,6).   edge(1,7).
%URUGUAI
edge(3,1).  edge(3,5).
%PARAGUAI
edge(4,1).  edge(4,5).   edge(4,6).
%BRASIL
edge(5,1).  edge(5,3).   edge(5,4). edge(5,6). edge(5,7). edge(5,9). edge(5,10). edge(5,11). edge(5,12). edge(5,13).
%BOLÍVIA
edge(6,1).  edge(6,2).   edge(6,4). edge(6,5). edge(6,7).
%PERU
edge(7,2).  edge(7,5).   edge(7,6). edge(7,8). edge(7,9).
%EQUADOR
edge(8,7).  edge(8,9).
%COLÔMBIA
edge(9,5).  edge(9,7).   edge(9,8). edge(9,10).
%VENENZUELA
edge(10,5). edge(10,9).  edge(9,11).
%GUIANA
edge(11,5). edge(11,10). edge(11,12).
%SURINAME
edge(12,5). edge(12,11). edge(11,13).
%GUIANA FRANCESA
edge(13,5). edge(13,12).
