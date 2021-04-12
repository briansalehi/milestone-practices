enum class TrafficLight
{
	red,
	yellow,
	green,
	blink
};

enum class TrafficState
{
	stop,
	caution,
	go
};

int main()
{
	TrafficState state;

    switch (TrafficLight light = TrafficLight::blink ; light) {
		case TrafficLight::red:
			state = TrafficState::stop;
            break;
		case TrafficLight::blink:
			[[fallthrough]]
		case TrafficLight::yellow:
			state = TrafficState::caution;
            break;
		case TrafficLight::green:
			state = TrafficState::go;
            break;
        default:
			state = TrafficState::caution;
    }

    return 0;
}
