def create_events(ts_seq, sample_id):
    events = []
    for ts in ts_seq:
        events.append({"ts": ts, "sample_id": sample_id})
    return events

def get_ts(event):
    return event["ts"]
