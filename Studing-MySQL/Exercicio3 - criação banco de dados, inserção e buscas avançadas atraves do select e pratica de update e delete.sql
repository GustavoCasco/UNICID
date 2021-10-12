CREATE DATABASE gerencial;
USE gerencial;

CREATE TABLE vendas(
id INT AUTO_INCREMENT PRIMARY KEY,
dEmissao DATE,
hEmissao CHAR(5) DEFAULT "",
dtEnvio DATE,
hEnvio CHAR(5) DEFAULT "",
dtEntrega DATE,
hEntrega CHAR(5) DEFAULT "",
statusEnvio CHAR(2) DEFAULT "",
nomeCliente VARCHAR(50),
uf CHAR(2),
totalPedido FLOAT(7,2),
vendedor VARCHAR(50),
comissao FLOAT(4,2),
pago BOOLEAN,
cancelado BOOLEAN,
obs TEXT
);

INSERT INTO vendas VALUES (0, "2021-09-30", "01:15","2021-09-05","12:40",NULL,"","I", "123 Monitoramento 
Ltda", "SP", 8570.00,"Siqueira", 2.20, 1, 1, "Porteiro João - Cliente mudou há dias.");
INSERT INTO vendas VALUES (0, "2021-09-01","23:12",NULL, "", NULL, "", "C", "Antonio da Silva", 
"RS",12900.00,"Siqueira",2.00, 0, 1, "");
INSERT INTO vendas VALUES (0,"2021-09-01","23:58", "2021-09-02", "10:27", "2021-09-02","12:12","E" ,"Ana 
Marcondes","SP",980.37,"Siqueira" ,3.20, 1, 0, "");
INSERT INTO vendas VALUES (0, "2021-09-02", "00:12","2021-09-03","08:05",NULL,"", "AF","Jose A. Souza", 
"RJ",2480.20, "JP",1.85, 0, 0, "");
INSERT INTO vendas VALUES (0, "2021-09-02", "00:12","2021-09-03","08:05",NULL,"","AF", "Jose A. 
Souza","RJ",2480.20, "JP", 1.85, 0, 0, "");
INSERT INTO vendas VALUES (0, "2021-09-01","22:50","2021-09-02","13:53","2021-09-03","15:00","E" ,"João 
M. dos Santos","SP",1580.12,"Siqueira" ,2.50, 1, 0, "");
INSERT INTO vendas VALUES (0, "2021-09-02","06:07",NULL,"",NULL, "", "AF","L. M. A. - ME", 
"SC",4200.00,"Natália" ,1.90, 0, 0, "");
INSERT INTO vendas VALUES (0, "2021-09-02", "07:12","2021-09-02","17:00",NULL,"17:00", "SC", "Renata C. 
Zonta","RJ",157.00, "JP", 2.80, 1, 0, "");
INSERT INTO vendas VALUES (0, "2021-09-02","08:20","2021-09-03" ,"12:05",NULL,"","V" ,"Antonio da 
Silva","RS",980.37,"Natália" ,3.00, 1, 0, "");
INSERT INTO vendas VALUES (0, "2021-09-02", "00:12","2021-09-03" ,"08:05",NULL,"" ,"AF","Jose A. Souza", 
"RJ", 2480.20,"JP",1.85,0, 0, "");

#exercicio1
DELETE FROM vendas WHERE id = 5 and id = 10;
#exercicio2
SELECT * FROM vendas order by nomeCliente ASC;
#exercicio3
SELECT * FROM vendas WHERE statusenvio = "AF";
#exercicio4
SELECT dEmissao, nomeCliente, totalPedido FROM vendas WHERE cancelado = "1";
#exercicio5
SELECT SUM(totalPedido) FROM vendas WHERE pago = "1";
#exercicio6
SELECT SUM(totalPedido)FROM vendas WHERE UF="SP";
#exercicio7
SELECT SUM(totalPedido)FROM vendas WHERE UF !="SP";
#exercicio8
SELECT nomecliente, totalpedido, statusenvio FROM vendas WHERE statusenvio = "E";
#exercicio9
SELECT * FROM vendas WHERE dEmissao = "2021-09-01" AND cancelado = 1;
#exercicio10
SELECT id, totalPedido, comissao FROM vendas WHERE vendedor = "Natália";
#exercicio11
UPDATE vendas
SET comissao = 0.00
WHERE vendedor = "JP";
#exercicio12
UPDATE vendas
SET totalPedido = 2980.27
WHERE nomeCliente = "Antonio da Silva" and id = 9;

