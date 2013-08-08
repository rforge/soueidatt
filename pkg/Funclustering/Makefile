SRC_DIR = src/
FUNCLUSTERINGSRCDIR = $(SRC_DIR)Funclustering/src/
LIBRARYDIR = $(SRC_DIR)Funclustering/
IALGODIR = $(FUNCLUSTERINGSRCDIR)IAlgo
IMODELDIR = $(FUNCLUSTERINGSRCDIR)IModel
ISTRATEGYDIR = $(FUNCLUSTERINGSRCDIR)IStrategy
FUNCLUSTERINGLIB = $(LIBRARYDIR)#libFunclustering.a
RFUNCLUSTERINGLIB = $(SRC_DIR)#Funclustering.so

all:	
	(cd ../ && R CMD INSTALL Funclustering)


clean:
	(cd $(SRC_DIR) && $(RM) *.o)
	(cd $(IALGODIR) && $(RM) *.o)
	(cd $(IMODELDIR) && $(RM) *.o)
	(cd $(ISTRATEGYDIR) && $(RM) *.o)
	(cd $(FUNCLUSTERINGLIB) && $(RM) libFunclustering.a)
	(cd $(RFUNCLUSTERINGLIB) && $(RM) Funclustering.so)