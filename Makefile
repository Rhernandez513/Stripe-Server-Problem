USER_DIR=$(PWD)/app
BUILD_OUT_DIR=./build

all:
	$(MAKE) -C $(BUILD_OUT_DIR) USER_DIR="$(USER_DIR)"

test:
	$(MAKE) -C $(BUILD_OUT_DIR) test USER_DIR="$(USER_DIR)"

clean:
	$(MAKE) -C $(BUILD_OUT_DIR) clean
