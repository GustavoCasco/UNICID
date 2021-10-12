create DATABASE eCommerce;
use eCommerce;

CREATE TABLE venda (
	numeropedido INT(6),
    nomecliente NVARCHAR(80),
    emailcliente NVARCHAR(100),
    datavenda DATE,
    entrega BOOLEAN,
    ddd NVARCHAR(2),
    telefone NVARCHAR(9),
	valortotal FLOAT(9,2)
    );
    
CREATE TABLE encomendas(
numeroentrega INT(6),
dataentrega DATE,
codigoentregador INT(6),
enderecodeentrega NVARCHAR(100),
bairro NVARCHAR(25),
cidade NVARCHAR(40),
cep NVARCHAR(9),
UF CHAR(2),
nomecliente NVARCHAR(80),
ddd nvarchar(2),
telefone nvarchar(9),
entregue BOOLEAN,
pesoBruto FLOAT(7,3)
);
    