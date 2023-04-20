def parse(data: str) -> dict:
    return {k: v for k, v in map(lambda i: i.split(":"), data.split(","))}
