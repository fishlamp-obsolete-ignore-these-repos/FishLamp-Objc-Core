XCODE = xcodebuild
PROJECT = FishLampCore.xcodeproj
TARGETS = FishLampCore
BUILD = build
CLEAN = clean

all: clean
	for t in $(TARGETS); do $(XCODE) -project $(PROJECT) -target $$t build; done

clean:
	for t in $(TARGETS); do $(XCODE) -project $(PROJECT) -target $$t clean; done