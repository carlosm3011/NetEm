CXXFLAGS =	-O2 -g -Wall -fmessage-length=0

OBJS =		SL2P.o L2Link.o

LIBS =

TARGET =	SL2P

$(TARGET):	$(OBJS)
	$(CXX) -o $(TARGET) $(OBJS) $(LIBS)

all:	$(TARGET)

clean:
	rm -f $(OBJS) $(TARGET)
