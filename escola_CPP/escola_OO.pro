TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    alunos/aluno.cpp \
    professores/professor.cpp \
    escola.cpp \
    endereco.cpp \
    contato.cpp \
    alunos/crudaluno.cpp \
    professores/crudprofessor.cpp \
    cursos/crudcurso.cpp \
    cursos/curso.cpp \
    cursos/avaliacao.cpp \
    cursos/turma.cpp

HEADERS += \
    endereco.h \
    contato.h \
    pessoa.h \
    professor.h \
    alunos/aluno.h \
    escola.h \
    alunos/crudaluno.h \
    alunos/listaAlunos.h \
    alunos/arvoreAluno.h \
    alunos/listaDuplaAlunos.h \
    professores/crudprofessor.h \
    professores/professor.h \
    professores/listaProfessores.h \
    professores/arvoreProfessor.h \
    professores/listaDuplaProfessores.h \
    cursos/crudcurso.h \
    cursos/curso.h \
    cursos/avaliacao.h \
    cursos/turma.h
