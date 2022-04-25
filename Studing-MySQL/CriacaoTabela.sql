CREATE DATABASE IF NOT EXISTS faculdade;
use faculdade;

CREATE TABLE IF NOT EXISTS aluno (
idAluno INT PRIMARY KEY auto_increment,
nome varchar(255),
sexo char(1)
);

CREATE TABLE IF NOT EXISTS turma (
idTurma INT PRIMARY KEY auto_increment,
dataInicio date,
dataFim date
);

CREATE TABLE IF NOT EXISTS professor (
idProfessor INT PRIMARY KEY auto_increment,
nomeProfessor varchar(255)
);

CREATE TABLE IF NOT EXISTS disciplina (
idDisciplina INT PRIMARY KEY auto_increment,
nome varchar(255)
);

CREATE TABLE IF NOT EXISTS matricula (
idMatricula INT PRIMARY KEY auto_increment,
dataMatricula date,
dataCancelamento date,
idAluno int,
idTurma int,
foreign key (idAluno) REFERENCES aluno(idAluno),
foreign key (idTurma) REFERENCES turma(idTurma)
);

CREATE TABLE  IF NOT EXISTS oferecida (
idOferecida INT PRIMARY KEY auto_increment,
sala varchar(255),
bloco varchar(255),
idProfessor int,
idTurma int,
idDisciplina int,
foreign key (idProfessor) REFERENCES professor(idProfessor),
foreign key (idTurma) REFERENCES turma(idTurma),
foreign key (idDisciplina) REFERENCES disciplina(idDisciplina)
);

CREATE TABLE IF NOT EXISTS avaliado(
idAluno INT,
idOferecida INT,
A1 INT,
A2 INT,
AF INT,
foreign key (idAluno) REFERENCES aluno(idAluno),
foreign key (idOferecida) REFERENCES oferecida(idOferecida),
constraint pk_avaliado primary key (idAluno,idOferecida)
);