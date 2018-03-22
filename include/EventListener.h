#ifndef EVENT_LISTENER_H
#define EVENT_LISTENER_H

class EventListener : public IGameEventListener2 {
public:
    EventListener(std::vector<const char*> events)
    {
        for (auto& it : events)
            gameEvents->AddListener(this, it, false);
    }

    ~EventListener()
    {
        gameEvents->RemoveListener(this);
    }

    void FireGameEvent(IGameEvent* event)
    {
        Aimbot::FireGameEvent(event);
        Hitmarkers::FireGameEvent(event);
        NameStealer::FireGameEvent(event);
        Spammer::FireGameEvent(event);
        ValveDSCheck::FireGameEvent(event);
        SkinChanger::FireGameEvent(event);
    }

    int GetEventDebugID() override
    {
        return EVENT_DEBUG_ID_INIT;
    }
};

#endif // EVENT_LISTENER_H
