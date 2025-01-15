CPP = c++
CFLAGS = -Wall -Wextra -Werror

TARGET_PATH = build/

module_4:
	$(CPP) $(CFLAGS) src/4/1.cpp -o $(TARGET_PATH)/4.1.out
	./$(TARGET_PATH)/4.1.out

	$(CPP) $(CFLAGS) src/4/3.cpp -o $(TARGET_PATH)/4.3.out
	./$(TARGET_PATH)/4.3.out

	# $(CPP) $(CFLAGS) src/4/5.cpp -o $(TARGET_PATH)/4.5.out
	# ./$(TARGET_PATH)/4.5.out

	$(CPP) $(CFLAGS) src/4/8.cpp -o $(TARGET_PATH)/4.8.out
	./$(TARGET_PATH)/4.8.out

	$(CPP) $(CFLAGS) src/4/12.cpp -o $(TARGET_PATH)/4.12.out
	./$(TARGET_PATH)/4.12.out


module_5:
	$(CPP) $(CFLAGS) src/5/2.cpp -o $(TARGET_PATH)/5.2.out
	./$(TARGET_PATH)/5.2.out

	$(CPP) $(CFLAGS) src/5/4.cpp -o $(TARGET_PATH)/5.4.out
	./$(TARGET_PATH)/5.4.out

	$(CPP) $(CFLAGS) src/5/7.cpp -o $(TARGET_PATH)/5.7.out
	./$(TARGET_PATH)/5.7.out

	$(CPP) $(CFLAGS) src/5/8.cpp -o $(TARGET_PATH)/5.8.out
	./$(TARGET_PATH)/5.8.out VolkNeTotKtoVoitAuf

	$(CPP) $(CFLAGS) src/5/10.cpp -o $(TARGET_PATH)/5.10.out
	./$(TARGET_PATH)/5.10.out 


clean: 
	rm -rf $(TARGET_PATH)/*

build_all: module_1 module_2
