SRC_DIR = src/
FUNCLUSTERSRCDIR = $(SRC_DIR)Funcluster/src/
LIBRARYDIR = $(SRC_DIR)Funcluster/
IALGODIR = $(SRC_DIR)Algorithms
IMODELDIR = $(SRC_DIR)IModel
ISTRATEGYDIR = $(SRC_DIR)IStrategy
FUNCLUSTERLIB = $(LIB_DIR)libFucluster.a
RFUNCLUSTERLIB = $(SRC_DIR)Funcluster.so

all:	
	(cd ../ && R CMD INSTALL Funcluster)


clean:
	(cd $(SRC_DIR) && $(RM) *.o)
	(cd $(IALGODIR) && $(RM) *.o)
	(cd $(IMODELDIR) && $(RM) *.o)
	(cd $(ISTRATEGYDIR) && $(RM) *.o)
	(cd $(FUNCLUSTERLIB) && $(RM) libFucluster.a)
	(cd $(RFUNCLUSTERLIB) && $(RM) Fucluster.so)