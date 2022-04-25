use faculdade;

INSERT INTO aluno  (nome, sexo) VALUES ("Clarice Malu da Paz", "F");
INSERT INTO aluno  (nome, sexo) VALUES ( "Marli Sônia Alves", "F");
INSERT INTO aluno  (nome, sexo) VALUES ("Kevin Yago Ferreira", "M");
INSERT INTO aluno  (nome, sexo) VALUES ("Patrícia Gabriela Vieira", "F");
INSERT INTO aluno  (nome, sexo) VALUES ("Bento André Ruan Souza", "M");
INSERT INTO aluno  (nome, sexo) VALUES ("Henry Anthony Thales Baptista", "M");
INSERT INTO aluno  (nome, sexo) VALUES ("Daiane Nair da Costa", "F");
INSERT INTO aluno  (nome, sexo) VALUES ("Lorenzo Yago Eduardo Mendes", "M");
INSERT INTO aluno  (nome, sexo) VALUES ("Noah Victor Kauê Pereira", "M");
INSERT INTO aluno  (nome, sexo) VALUES ("Cauê Kevin Pinto", "M");

INSERT INTO turma (dataInicio, dataFim) VALUES ('2020-01-27', '2022-12-19');
INSERT INTO turma (dataInicio, dataFim) VALUES ('2019-02-03','2022-04-12');

INSERT INTO professor (nomeProfessor) VALUES ("Rebeca Marli Barros" );
INSERT INTO professor (nomeProfessor) VALUES ("Danilo Elias Raul Rocha" );
INSERT INTO professor (nomeProfessor) VALUES ("Theo Caio Caldeira" );
INSERT INTO professor (nomeProfessor) VALUES ("Sueli Gabriela Rodrigues" );
INSERT INTO professor (nomeProfessor) VALUES ("Gabrielly Emilly Campos" );

INSERT INTO disciplina (nome) VALUES ("Banco de Dados");
INSERT INTO disciplina (nome) VALUES ("Engenharia de Software");
INSERT INTO disciplina (nome) VALUES ("Redes de Computadores");
INSERT INTO disciplina (nome) VALUES ("Técnicas de Programação");
INSERT INTO disciplina (nome) VALUES ("Análise e Projeto de Sistemas");

INSERT INTO matricula (dataMatricula,dataCancelamento,idAluno,idTurma) VALUES ('2020-01-27','2022-12-19',1,1);
INSERT INTO matricula (dataMatricula,dataCancelamento,idAluno, idTurma) VALUES ('2020-01-29','2022-12-19',2,1);
INSERT INTO matricula (dataMatricula,dataCancelamento,idAluno,idTurma) VALUES ('2020-01-29','2022-12-19',3,1);
INSERT INTO matricula (dataMatricula,dataCancelamento,idAluno,idTurma) VALUES ('2020-01-28','2022-12-19',4,1);
INSERT INTO matricula (dataMatricula,dataCancelamento,idAluno, idTurma) VALUES ('2020-01-28','2022-12-19',5,1);
INSERT INTO matricula (dataMatricula,dataCancelamento,idAluno,idTurma) VALUES ('2020-01-27','2022-12-19',6,1);
INSERT INTO matricula (dataMatricula,dataCancelamento,idAluno,idTurma) VALUES ('2020-01-27','2022-12-19',7,1);
INSERT INTO matricula (dataMatricula,dataCancelamento,idAluno,idTurma) VALUES ('2020-01-28','2022-12-19',8,1);
INSERT INTO matricula (dataMatricula,dataCancelamento,idAluno, idTurma) VALUES ('2020-01-27','2022-12-19',9,1);
INSERT INTO matricula (dataMatricula,dataCancelamento,idAluno,idTurma) VALUES ('2020-01-29','2022-12-19',10,1);

INSERT INTO oferecida (bloco, sala, idProfessor, idTurma, idDisciplina) VALUES ("Alpha","Laborátorio 5",2,1,1);
INSERT INTO oferecida (bloco, sala, idProfessor, idTurma, idDisciplina) VALUES ("Alpha","Laborátorio 6",1,1,3);
INSERT INTO oferecida (bloco, sala, idProfessor, idTurma, idDisciplina) VALUES ("A", "411",4,1,2 );
INSERT INTO oferecida (bloco, sala, idProfessor, idTurma, idDisciplina) VALUES ("A", "409", 5,1,4);
INSERT INTO oferecida (bloco, sala, idProfessor, idTurma, idDisciplina) VALUES ("B", "113",3,1,5);
INSERT INTO oferecida (bloco, sala, idProfessor, idTurma, idDisciplina) VALUES ("Alpha","Laborátorio 5",2,2,1);
INSERT INTO oferecida (bloco, sala, idProfessor, idTurma, idDisciplina) VALUES ("Alpha","Laborátorio 6",1,2,3);
INSERT INTO oferecida (bloco, sala, idProfessor, idTurma, idDisciplina) VALUES ("A", "411",4,2,2 );
INSERT INTO oferecida (bloco, sala, idProfessor, idTurma, idDisciplina) VALUES ("A", "409", 5,2,4);
INSERT INTO oferecida (bloco, sala, idProfessor, idTurma, idDisciplina) VALUES ("B", "113",3,2,5);



Select a.nome as NomeAluno, d.nome as Materia, t.idTurma from aluno a
join turma t
join disciplina d
where t.idTurma = "1" and d.idDisciplina = "1";


Select * FROM turma t
WHERE curdate()<dataFim