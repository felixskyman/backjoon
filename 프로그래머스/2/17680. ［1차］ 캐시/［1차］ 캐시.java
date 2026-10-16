import java.util.LinkedHashMap;
import java.util.Map;

class LRUCache<K, V> extends LinkedHashMap<K, V> {
    private final int capacity;

    public LRUCache(int capacity) {
        super(Math.max(1, capacity), 0.75f, true);
        this.capacity = capacity;
    }

    @Override
    protected boolean removeEldestEntry(Map.Entry<K, V> eldest) {
        return size() > capacity;
    }
}

class Solution {
    public int solution(int cacheSize, String[] cities) {
        int answer = 0;

        LRUCache<String, Boolean> cache = new LRUCache<>(cacheSize);

        for (String city : cities) {
            city = city.toLowerCase();

            if (cache.containsKey(city)) {
                answer += 1;

                cache.get(city);
            } else {
                answer += 5;

                if (cacheSize > 0) {
                    cache.put(city, true);
                }
            }
        }

        return answer;
    }
}
