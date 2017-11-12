

col(r). col(g). col(b). col(y).
{ color(X,C) : col(C) } == 1 :- node(X).
:- edge(X,Y), color(X,C), color(Y,C), color(Z,C).

#show color/2.
