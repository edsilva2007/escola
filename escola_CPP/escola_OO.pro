TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    alunos/aluno.cpp \
    professor.cpp \
    escola.cpp \
    endereco.cpp \
    contato.cpp \
    alunos/crudaluno.cpp

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

